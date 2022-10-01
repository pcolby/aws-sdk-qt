// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresourceshareresponse.h"
#include "createresourceshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::CreateResourceShareResponse
 * \brief The CreateResourceShareResponse class provides an interace for Ram CreateResourceShare responses.
 *
 * \inmodule QtAwsRam
 *
 *  This is the <i>Resource Access Manager API Reference</i>. This documentation provides descriptions and syntax for each
 *  of the actions and data types in RAM. RAM is a service that helps you securely share your Amazon Web Services resources
 *  across Amazon Web Services accounts. If you have multiple Amazon Web Services accounts, you can use RAM to share those
 *  resources with other accounts. If you use Organizations to manage your accounts, then you share your resources with your
 *  organization or organizational units (OUs). For supported resource types, you can also share resources with individual
 *  Identity and Access Management (IAM) roles an users.
 * 
 *  </p
 * 
 *  To learn more about RAM, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ram">Resource Access Manager product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager User Guide</a>
 *
 * \sa RamClient::createResourceShare
 */

/*!
 * Constructs a CreateResourceShareResponse object for \a reply to \a request, with parent \a parent.
 */
CreateResourceShareResponse::CreateResourceShareResponse(
        const CreateResourceShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new CreateResourceShareResponsePrivate(this), parent)
{
    setRequest(new CreateResourceShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateResourceShareRequest * CreateResourceShareResponse::request() const
{
    Q_D(const CreateResourceShareResponse);
    return static_cast<const CreateResourceShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ram CreateResourceShare \a response.
 */
void CreateResourceShareResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateResourceShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ram::CreateResourceShareResponsePrivate
 * \brief The CreateResourceShareResponsePrivate class provides private implementation for CreateResourceShareResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a CreateResourceShareResponsePrivate object with public implementation \a q.
 */
CreateResourceShareResponsePrivate::CreateResourceShareResponsePrivate(
    CreateResourceShareResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a Ram CreateResourceShare response element from \a xml.
 */
void CreateResourceShareResponsePrivate::parseCreateResourceShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourceShareResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ram
} // namespace QtAws
