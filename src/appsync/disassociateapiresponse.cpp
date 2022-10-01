// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateapiresponse.h"
#include "disassociateapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DisassociateApiResponse
 * \brief The DisassociateApiResponse class provides an interace for AppSync DisassociateApi responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::disassociateApi
 */

/*!
 * Constructs a DisassociateApiResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateApiResponse::DisassociateApiResponse(
        const DisassociateApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DisassociateApiResponsePrivate(this), parent)
{
    setRequest(new DisassociateApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateApiRequest * DisassociateApiResponse::request() const
{
    Q_D(const DisassociateApiResponse);
    return static_cast<const DisassociateApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync DisassociateApi \a response.
 */
void DisassociateApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::DisassociateApiResponsePrivate
 * \brief The DisassociateApiResponsePrivate class provides private implementation for DisassociateApiResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DisassociateApiResponsePrivate object with public implementation \a q.
 */
DisassociateApiResponsePrivate::DisassociateApiResponsePrivate(
    DisassociateApiResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync DisassociateApi response element from \a xml.
 */
void DisassociateApiResponsePrivate::parseDisassociateApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
