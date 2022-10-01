// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhitwithhittyperesponse.h"
#include "createhitwithhittyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateHITWithHITTypeResponse
 * \brief The CreateHITWithHITTypeResponse class provides an interace for MTurk CreateHITWithHITType responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createHITWithHITType
 */

/*!
 * Constructs a CreateHITWithHITTypeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHITWithHITTypeResponse::CreateHITWithHITTypeResponse(
        const CreateHITWithHITTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new CreateHITWithHITTypeResponsePrivate(this), parent)
{
    setRequest(new CreateHITWithHITTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHITWithHITTypeRequest * CreateHITWithHITTypeResponse::request() const
{
    Q_D(const CreateHITWithHITTypeResponse);
    return static_cast<const CreateHITWithHITTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk CreateHITWithHITType \a response.
 */
void CreateHITWithHITTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHITWithHITTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::CreateHITWithHITTypeResponsePrivate
 * \brief The CreateHITWithHITTypeResponsePrivate class provides private implementation for CreateHITWithHITTypeResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateHITWithHITTypeResponsePrivate object with public implementation \a q.
 */
CreateHITWithHITTypeResponsePrivate::CreateHITWithHITTypeResponsePrivate(
    CreateHITWithHITTypeResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk CreateHITWithHITType response element from \a xml.
 */
void CreateHITWithHITTypeResponsePrivate::parseCreateHITWithHITTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHITWithHITTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
