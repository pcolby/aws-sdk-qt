// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getqualificationtyperesponse.h"
#include "getqualificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetQualificationTypeResponse
 * \brief The GetQualificationTypeResponse class provides an interace for MTurk GetQualificationType responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::getQualificationType
 */

/*!
 * Constructs a GetQualificationTypeResponse object for \a reply to \a request, with parent \a parent.
 */
GetQualificationTypeResponse::GetQualificationTypeResponse(
        const GetQualificationTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new GetQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new GetQualificationTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetQualificationTypeRequest * GetQualificationTypeResponse::request() const
{
    Q_D(const GetQualificationTypeResponse);
    return static_cast<const GetQualificationTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk GetQualificationType \a response.
 */
void GetQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetQualificationTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::GetQualificationTypeResponsePrivate
 * \brief The GetQualificationTypeResponsePrivate class provides private implementation for GetQualificationTypeResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a GetQualificationTypeResponsePrivate object with public implementation \a q.
 */
GetQualificationTypeResponsePrivate::GetQualificationTypeResponsePrivate(
    GetQualificationTypeResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk GetQualificationType response element from \a xml.
 */
void GetQualificationTypeResponsePrivate::parseGetQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQualificationTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
