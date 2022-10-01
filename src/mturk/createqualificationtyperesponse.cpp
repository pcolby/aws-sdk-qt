// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createqualificationtyperesponse.h"
#include "createqualificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateQualificationTypeResponse
 * \brief The CreateQualificationTypeResponse class provides an interace for MTurk CreateQualificationType responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createQualificationType
 */

/*!
 * Constructs a CreateQualificationTypeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateQualificationTypeResponse::CreateQualificationTypeResponse(
        const CreateQualificationTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new CreateQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new CreateQualificationTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateQualificationTypeRequest * CreateQualificationTypeResponse::request() const
{
    Q_D(const CreateQualificationTypeResponse);
    return static_cast<const CreateQualificationTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk CreateQualificationType \a response.
 */
void CreateQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateQualificationTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::CreateQualificationTypeResponsePrivate
 * \brief The CreateQualificationTypeResponsePrivate class provides private implementation for CreateQualificationTypeResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateQualificationTypeResponsePrivate object with public implementation \a q.
 */
CreateQualificationTypeResponsePrivate::CreateQualificationTypeResponsePrivate(
    CreateQualificationTypeResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk CreateQualificationType response element from \a xml.
 */
void CreateQualificationTypeResponsePrivate::parseCreateQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateQualificationTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
