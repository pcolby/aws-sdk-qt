// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstudiocomponentresponse.h"
#include "createstudiocomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::CreateStudioComponentResponse
 * \brief The CreateStudioComponentResponse class provides an interace for Nimble CreateStudioComponent responses.
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
 * \sa NimbleClient::createStudioComponent
 */

/*!
 * Constructs a CreateStudioComponentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStudioComponentResponse::CreateStudioComponentResponse(
        const CreateStudioComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new CreateStudioComponentResponsePrivate(this), parent)
{
    setRequest(new CreateStudioComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStudioComponentRequest * CreateStudioComponentResponse::request() const
{
    Q_D(const CreateStudioComponentResponse);
    return static_cast<const CreateStudioComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble CreateStudioComponent \a response.
 */
void CreateStudioComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStudioComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::CreateStudioComponentResponsePrivate
 * \brief The CreateStudioComponentResponsePrivate class provides private implementation for CreateStudioComponentResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a CreateStudioComponentResponsePrivate object with public implementation \a q.
 */
CreateStudioComponentResponsePrivate::CreateStudioComponentResponsePrivate(
    CreateStudioComponentResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble CreateStudioComponent response element from \a xml.
 */
void CreateStudioComponentResponsePrivate::parseCreateStudioComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStudioComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
