/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "translateclient.h"
#include "translateclient_p.h"

#include "core/awssignaturev4.h"
#include "deleteterminologyrequest.h"
#include "deleteterminologyresponse.h"
#include "getterminologyrequest.h"
#include "getterminologyresponse.h"
#include "importterminologyrequest.h"
#include "importterminologyresponse.h"
#include "listterminologiesrequest.h"
#include "listterminologiesresponse.h"
#include "translatetextrequest.h"
#include "translatetextresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Translate
 * \brief Contains classess for accessing Amazon Translate.
 *
 * \inmodule QtAwsTranslate
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::TranslateClient
 * \brief The TranslateClient class provides access to the Amazon Translate service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 */

/*!
 * \brief Constructs a TranslateClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
TranslateClient::TranslateClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TranslateClientPrivate(this), parent)
{
    Q_D(TranslateClient);
    d->apiVersion = QStringLiteral("2017-07-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("translate");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Translate");
    d->serviceName = QStringLiteral("translate");
}

/*!
 * \overload TranslateClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
TranslateClient::TranslateClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TranslateClientPrivate(this), parent)
{
    Q_D(TranslateClient);
    d->apiVersion = QStringLiteral("2017-07-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("translate");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Translate");
    d->serviceName = QStringLiteral("translate");
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * DeleteTerminologyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A synchronous action that deletes a custom
 */
DeleteTerminologyResponse * TranslateClient::deleteTerminology(const DeleteTerminologyRequest &request)
{
    return qobject_cast<DeleteTerminologyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * GetTerminologyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a custom
 */
GetTerminologyResponse * TranslateClient::getTerminology(const GetTerminologyRequest &request)
{
    return qobject_cast<GetTerminologyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * ImportTerminologyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a custom terminology, depending on whether or not one already exists for the given terminology name.
 * Importing a terminology with the same name as an existing one will merge the terminologies based on the chosen merge
 * strategy. Currently, the only supported merge strategy is OVERWRITE, and so the imported terminology will overwrite an
 * existing terminology of the same
 *
 * name>
 *
 * If you import a terminology that overwrites an existing one, the new terminology take up to 10 minutes to fully
 * propagate and be available for use in a translation due to cache policies with the DataPlane service that performs the
 */
ImportTerminologyResponse * TranslateClient::importTerminology(const ImportTerminologyRequest &request)
{
    return qobject_cast<ImportTerminologyResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * ListTerminologiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of custom terminologies associated with your
 */
ListTerminologiesResponse * TranslateClient::listTerminologies(const ListTerminologiesRequest &request)
{
    return qobject_cast<ListTerminologiesResponse *>(send(request));
}

/*!
 * Sends \a request to the TranslateClient service, and returns a pointer to an
 * TranslateTextResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Translates input text from the source language to the target language. It is not necessary to use English (en) as either
 * the source or the target language but not all language combinations are supported by Amazon Translate. For more
 * information, see <a href="http://docs.aws.amazon.com/translate/latest/dg/pairs.html">Supported Language
 *
 * Pairs</a>> <ul> <li>
 *
 * Arabic
 *
 * (ar> </li> <li>
 *
 * Chinese (Simplified)
 *
 * (zh> </li> <li>
 *
 * Chinese (Traditional)
 *
 * (zh-TW> </li> <li>
 *
 * Czech
 *
 * (cs> </li> <li>
 *
 * Danish
 *
 * (da> </li> <li>
 *
 * Dutch
 *
 * (nl> </li> <li>
 *
 * English
 *
 * (en> </li> <li>
 *
 * Finnish
 *
 * (fi> </li> <li>
 *
 * French
 *
 * (fr> </li> <li>
 *
 * German
 *
 * (de> </li> <li>
 *
 * Hebrew
 *
 * (he> </li> <li>
 *
 * Indonesian
 *
 * (id> </li> <li>
 *
 * Italian
 *
 * (it> </li> <li>
 *
 * Japanese
 *
 * (ja> </li> <li>
 *
 * Korean
 *
 * (ko> </li> <li>
 *
 * Polish
 *
 * (pl> </li> <li>
 *
 * Portuguese
 *
 * (pt> </li> <li>
 *
 * Russian
 *
 * (ru> </li> <li>
 *
 * Spanish
 *
 * (es> </li> <li>
 *
 * Swedish
 *
 * (sv> </li> <li>
 *
 * Turkish
 *
 * (tr> </li> </ul>
 *
 * To have Amazon Translate determine the source language of your text, you can specify <code>auto</code> in the
 * <code>SourceLanguageCode</code> field. If you specify <code>auto</code>, Amazon Translate will call Amazon Comprehend to
 * determine the source
 */
TranslateTextResponse * TranslateClient::translateText(const TranslateTextRequest &request)
{
    return qobject_cast<TranslateTextResponse *>(send(request));
}

/*!
 * \class QtAws::Translate::TranslateClientPrivate
 * \brief The TranslateClientPrivate class provides private implementation for TranslateClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a TranslateClientPrivate object with public implementation \a q.
 */
TranslateClientPrivate::TranslateClientPrivate(TranslateClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Translate
} // namespace QtAws
