// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatequalificationtyperesponse.h"
#include "updatequalificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::UpdateQualificationTypeResponse
 * \brief The UpdateQualificationTypeResponse class provides an interace for MTurk UpdateQualificationType responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::updateQualificationType
 */

/*!
 * Constructs a UpdateQualificationTypeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateQualificationTypeResponse::UpdateQualificationTypeResponse(
        const UpdateQualificationTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new UpdateQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new UpdateQualificationTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateQualificationTypeRequest * UpdateQualificationTypeResponse::request() const
{
    Q_D(const UpdateQualificationTypeResponse);
    return static_cast<const UpdateQualificationTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk UpdateQualificationType \a response.
 */
void UpdateQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateQualificationTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::UpdateQualificationTypeResponsePrivate
 * \brief The UpdateQualificationTypeResponsePrivate class provides private implementation for UpdateQualificationTypeResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a UpdateQualificationTypeResponsePrivate object with public implementation \a q.
 */
UpdateQualificationTypeResponsePrivate::UpdateQualificationTypeResponsePrivate(
    UpdateQualificationTypeResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk UpdateQualificationType response element from \a xml.
 */
void UpdateQualificationTypeResponsePrivate::parseUpdateQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateQualificationTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
