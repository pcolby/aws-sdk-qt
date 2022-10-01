// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhittyperesponse.h"
#include "createhittyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateHITTypeResponse
 * \brief The CreateHITTypeResponse class provides an interace for MTurk CreateHITType responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createHITType
 */

/*!
 * Constructs a CreateHITTypeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHITTypeResponse::CreateHITTypeResponse(
        const CreateHITTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new CreateHITTypeResponsePrivate(this), parent)
{
    setRequest(new CreateHITTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHITTypeRequest * CreateHITTypeResponse::request() const
{
    Q_D(const CreateHITTypeResponse);
    return static_cast<const CreateHITTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk CreateHITType \a response.
 */
void CreateHITTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHITTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::CreateHITTypeResponsePrivate
 * \brief The CreateHITTypeResponsePrivate class provides private implementation for CreateHITTypeResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateHITTypeResponsePrivate object with public implementation \a q.
 */
CreateHITTypeResponsePrivate::CreateHITTypeResponsePrivate(
    CreateHITTypeResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk CreateHITType response element from \a xml.
 */
void CreateHITTypeResponsePrivate::parseCreateHITTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHITTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
