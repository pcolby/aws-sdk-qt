// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatequalificationwithworkerresponse.h"
#include "associatequalificationwithworkerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::AssociateQualificationWithWorkerResponse
 * \brief The AssociateQualificationWithWorkerResponse class provides an interace for MTurk AssociateQualificationWithWorker responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::associateQualificationWithWorker
 */

/*!
 * Constructs a AssociateQualificationWithWorkerResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateQualificationWithWorkerResponse::AssociateQualificationWithWorkerResponse(
        const AssociateQualificationWithWorkerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new AssociateQualificationWithWorkerResponsePrivate(this), parent)
{
    setRequest(new AssociateQualificationWithWorkerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateQualificationWithWorkerRequest * AssociateQualificationWithWorkerResponse::request() const
{
    Q_D(const AssociateQualificationWithWorkerResponse);
    return static_cast<const AssociateQualificationWithWorkerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk AssociateQualificationWithWorker \a response.
 */
void AssociateQualificationWithWorkerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateQualificationWithWorkerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::AssociateQualificationWithWorkerResponsePrivate
 * \brief The AssociateQualificationWithWorkerResponsePrivate class provides private implementation for AssociateQualificationWithWorkerResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a AssociateQualificationWithWorkerResponsePrivate object with public implementation \a q.
 */
AssociateQualificationWithWorkerResponsePrivate::AssociateQualificationWithWorkerResponsePrivate(
    AssociateQualificationWithWorkerResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk AssociateQualificationWithWorker response element from \a xml.
 */
void AssociateQualificationWithWorkerResponsePrivate::parseAssociateQualificationWithWorkerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateQualificationWithWorkerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
