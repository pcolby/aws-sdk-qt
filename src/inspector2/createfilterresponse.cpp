// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfilterresponse.h"
#include "createfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::CreateFilterResponse
 * \brief The CreateFilterResponse class provides an interace for Inspector2 CreateFilter responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::createFilter
 */

/*!
 * Constructs a CreateFilterResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFilterResponse::CreateFilterResponse(
        const CreateFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new CreateFilterResponsePrivate(this), parent)
{
    setRequest(new CreateFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFilterRequest * CreateFilterResponse::request() const
{
    Q_D(const CreateFilterResponse);
    return static_cast<const CreateFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 CreateFilter \a response.
 */
void CreateFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::CreateFilterResponsePrivate
 * \brief The CreateFilterResponsePrivate class provides private implementation for CreateFilterResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a CreateFilterResponsePrivate object with public implementation \a q.
 */
CreateFilterResponsePrivate::CreateFilterResponsePrivate(
    CreateFilterResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 CreateFilter response element from \a xml.
 */
void CreateFilterResponsePrivate::parseCreateFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
