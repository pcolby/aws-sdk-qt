// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcomponentsresponse.h"
#include "listcomponentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListComponentsResponse
 * \brief The ListComponentsResponse class provides an interace for ImageBuilder ListComponents responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listComponents
 */

/*!
 * Constructs a ListComponentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListComponentsResponse::ListComponentsResponse(
        const ListComponentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new ListComponentsResponsePrivate(this), parent)
{
    setRequest(new ListComponentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListComponentsRequest * ListComponentsResponse::request() const
{
    Q_D(const ListComponentsResponse);
    return static_cast<const ListComponentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder ListComponents \a response.
 */
void ListComponentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListComponentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::ListComponentsResponsePrivate
 * \brief The ListComponentsResponsePrivate class provides private implementation for ListComponentsResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListComponentsResponsePrivate object with public implementation \a q.
 */
ListComponentsResponsePrivate::ListComponentsResponsePrivate(
    ListComponentsResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder ListComponents response element from \a xml.
 */
void ListComponentsResponsePrivate::parseListComponentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListComponentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
