// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resetuserpasswordresponse.h"
#include "resetuserpasswordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ResetUserPasswordResponse
 * \brief The ResetUserPasswordResponse class provides an interace for FinspaceData ResetUserPassword responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::resetUserPassword
 */

/*!
 * Constructs a ResetUserPasswordResponse object for \a reply to \a request, with parent \a parent.
 */
ResetUserPasswordResponse::ResetUserPasswordResponse(
        const ResetUserPasswordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new ResetUserPasswordResponsePrivate(this), parent)
{
    setRequest(new ResetUserPasswordRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetUserPasswordRequest * ResetUserPasswordResponse::request() const
{
    Q_D(const ResetUserPasswordResponse);
    return static_cast<const ResetUserPasswordRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData ResetUserPassword \a response.
 */
void ResetUserPasswordResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetUserPasswordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::ResetUserPasswordResponsePrivate
 * \brief The ResetUserPasswordResponsePrivate class provides private implementation for ResetUserPasswordResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ResetUserPasswordResponsePrivate object with public implementation \a q.
 */
ResetUserPasswordResponsePrivate::ResetUserPasswordResponsePrivate(
    ResetUserPasswordResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData ResetUserPassword response element from \a xml.
 */
void ResetUserPasswordResponsePrivate::parseResetUserPasswordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetUserPasswordResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
