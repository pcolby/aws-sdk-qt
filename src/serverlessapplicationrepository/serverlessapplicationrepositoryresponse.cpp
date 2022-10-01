// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "serverlessapplicationrepositoryresponse.h"
#include "serverlessapplicationrepositoryresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServerlessApplicationRepository {

/*!
 * \class QtAws::ServerlessApplicationRepository::ServerlessApplicationRepositoryResponse
 * \brief The ServerlessApplicationRepositoryResponse class provides an interface for ServerlessApplicationRepository responses.
 *
 * \inmodule QtAwsServerlessApplicationRepository
 */

/*!
 * Constructs a ServerlessApplicationRepositoryResponse object with parent \a parent.
 */
ServerlessApplicationRepositoryResponse::ServerlessApplicationRepositoryResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ServerlessApplicationRepositoryResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ServerlessApplicationRepositoryResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ServerlessApplicationRepositoryResponsePrivate.
 */
ServerlessApplicationRepositoryResponse::ServerlessApplicationRepositoryResponse(ServerlessApplicationRepositoryResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ServerlessApplicationRepositoryResponse::parseFailure(QIODevice &response)
{
    //Q_D(ServerlessApplicationRepositoryResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::ServerlessApplicationRepository::ServerlessApplicationRepositoryResponsePrivate
 * \brief The ServerlessApplicationRepositoryResponsePrivate class provides private implementation for ServerlessApplicationRepositoryResponse.
 * \internal
 *
 * \inmodule QtAwsServerlessApplicationRepository
 */

/*!
 * Constructs a ServerlessApplicationRepositoryResponsePrivate object with public implementation \a q.
 */
ServerlessApplicationRepositoryResponsePrivate::ServerlessApplicationRepositoryResponsePrivate(
    ServerlessApplicationRepositoryResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ServerlessApplicationRepository
} // namespace QtAws
