// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcontainerresponse.h"
#include "createcontainerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::CreateContainerResponse
 * \brief The CreateContainerResponse class provides an interace for MediaStore CreateContainer responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::createContainer
 */

/*!
 * Constructs a CreateContainerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateContainerResponse::CreateContainerResponse(
        const CreateContainerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new CreateContainerResponsePrivate(this), parent)
{
    setRequest(new CreateContainerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateContainerRequest * CreateContainerResponse::request() const
{
    Q_D(const CreateContainerResponse);
    return static_cast<const CreateContainerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore CreateContainer \a response.
 */
void CreateContainerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateContainerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::CreateContainerResponsePrivate
 * \brief The CreateContainerResponsePrivate class provides private implementation for CreateContainerResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a CreateContainerResponsePrivate object with public implementation \a q.
 */
CreateContainerResponsePrivate::CreateContainerResponsePrivate(
    CreateContainerResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore CreateContainer response element from \a xml.
 */
void CreateContainerResponsePrivate::parseCreateContainerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateContainerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
