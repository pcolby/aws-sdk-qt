// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletequalificationtyperesponse.h"
#include "deletequalificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::DeleteQualificationTypeResponse
 * \brief The DeleteQualificationTypeResponse class provides an interace for MTurk DeleteQualificationType responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::deleteQualificationType
 */

/*!
 * Constructs a DeleteQualificationTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteQualificationTypeResponse::DeleteQualificationTypeResponse(
        const DeleteQualificationTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new DeleteQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new DeleteQualificationTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteQualificationTypeRequest * DeleteQualificationTypeResponse::request() const
{
    Q_D(const DeleteQualificationTypeResponse);
    return static_cast<const DeleteQualificationTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk DeleteQualificationType \a response.
 */
void DeleteQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteQualificationTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::DeleteQualificationTypeResponsePrivate
 * \brief The DeleteQualificationTypeResponsePrivate class provides private implementation for DeleteQualificationTypeResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a DeleteQualificationTypeResponsePrivate object with public implementation \a q.
 */
DeleteQualificationTypeResponsePrivate::DeleteQualificationTypeResponsePrivate(
    DeleteQualificationTypeResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk DeleteQualificationType response element from \a xml.
 */
void DeleteQualificationTypeResponsePrivate::parseDeleteQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteQualificationTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
