// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rejectqualificationrequestresponse.h"
#include "rejectqualificationrequestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::RejectQualificationRequestResponse
 * \brief The RejectQualificationRequestResponse class provides an interace for MTurk RejectQualificationRequest responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::rejectQualificationRequest
 */

/*!
 * Constructs a RejectQualificationRequestResponse object for \a reply to \a request, with parent \a parent.
 */
RejectQualificationRequestResponse::RejectQualificationRequestResponse(
        const RejectQualificationRequestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new RejectQualificationRequestResponsePrivate(this), parent)
{
    setRequest(new RejectQualificationRequestRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectQualificationRequestRequest * RejectQualificationRequestResponse::request() const
{
    Q_D(const RejectQualificationRequestResponse);
    return static_cast<const RejectQualificationRequestRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk RejectQualificationRequest \a response.
 */
void RejectQualificationRequestResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RejectQualificationRequestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::RejectQualificationRequestResponsePrivate
 * \brief The RejectQualificationRequestResponsePrivate class provides private implementation for RejectQualificationRequestResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a RejectQualificationRequestResponsePrivate object with public implementation \a q.
 */
RejectQualificationRequestResponsePrivate::RejectQualificationRequestResponsePrivate(
    RejectQualificationRequestResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk RejectQualificationRequest response element from \a xml.
 */
void RejectQualificationRequestResponsePrivate::parseRejectQualificationRequestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectQualificationRequestResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
