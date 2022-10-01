// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstudioresponse.h"
#include "createstudioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::CreateStudioResponse
 * \brief The CreateStudioResponse class provides an interace for Nimble CreateStudio responses.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::createStudio
 */

/*!
 * Constructs a CreateStudioResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStudioResponse::CreateStudioResponse(
        const CreateStudioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new CreateStudioResponsePrivate(this), parent)
{
    setRequest(new CreateStudioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStudioRequest * CreateStudioResponse::request() const
{
    Q_D(const CreateStudioResponse);
    return static_cast<const CreateStudioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble CreateStudio \a response.
 */
void CreateStudioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStudioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::CreateStudioResponsePrivate
 * \brief The CreateStudioResponsePrivate class provides private implementation for CreateStudioResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a CreateStudioResponsePrivate object with public implementation \a q.
 */
CreateStudioResponsePrivate::CreateStudioResponsePrivate(
    CreateStudioResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble CreateStudio response element from \a xml.
 */
void CreateStudioResponsePrivate::parseCreateStudioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStudioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
