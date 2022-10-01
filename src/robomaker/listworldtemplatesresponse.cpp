// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworldtemplatesresponse.h"
#include "listworldtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListWorldTemplatesResponse
 * \brief The ListWorldTemplatesResponse class provides an interace for RoboMaker ListWorldTemplates responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listWorldTemplates
 */

/*!
 * Constructs a ListWorldTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorldTemplatesResponse::ListWorldTemplatesResponse(
        const ListWorldTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListWorldTemplatesResponsePrivate(this), parent)
{
    setRequest(new ListWorldTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorldTemplatesRequest * ListWorldTemplatesResponse::request() const
{
    Q_D(const ListWorldTemplatesResponse);
    return static_cast<const ListWorldTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListWorldTemplates \a response.
 */
void ListWorldTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorldTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListWorldTemplatesResponsePrivate
 * \brief The ListWorldTemplatesResponsePrivate class provides private implementation for ListWorldTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListWorldTemplatesResponsePrivate object with public implementation \a q.
 */
ListWorldTemplatesResponsePrivate::ListWorldTemplatesResponsePrivate(
    ListWorldTemplatesResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListWorldTemplates response element from \a xml.
 */
void ListWorldTemplatesResponsePrivate::parseListWorldTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorldTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
