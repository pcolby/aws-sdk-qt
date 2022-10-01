// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createextendedsourceserverresponse.h"
#include "createextendedsourceserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::CreateExtendedSourceServerResponse
 * \brief The CreateExtendedSourceServerResponse class provides an interace for Drs CreateExtendedSourceServer responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::createExtendedSourceServer
 */

/*!
 * Constructs a CreateExtendedSourceServerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateExtendedSourceServerResponse::CreateExtendedSourceServerResponse(
        const CreateExtendedSourceServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new CreateExtendedSourceServerResponsePrivate(this), parent)
{
    setRequest(new CreateExtendedSourceServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateExtendedSourceServerRequest * CreateExtendedSourceServerResponse::request() const
{
    Q_D(const CreateExtendedSourceServerResponse);
    return static_cast<const CreateExtendedSourceServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs CreateExtendedSourceServer \a response.
 */
void CreateExtendedSourceServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateExtendedSourceServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::CreateExtendedSourceServerResponsePrivate
 * \brief The CreateExtendedSourceServerResponsePrivate class provides private implementation for CreateExtendedSourceServerResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a CreateExtendedSourceServerResponsePrivate object with public implementation \a q.
 */
CreateExtendedSourceServerResponsePrivate::CreateExtendedSourceServerResponsePrivate(
    CreateExtendedSourceServerResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs CreateExtendedSourceServer response element from \a xml.
 */
void CreateExtendedSourceServerResponsePrivate::parseCreateExtendedSourceServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateExtendedSourceServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
