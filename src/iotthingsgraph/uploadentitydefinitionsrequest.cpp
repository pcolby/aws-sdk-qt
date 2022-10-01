// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "uploadentitydefinitionsrequest.h"
#include "uploadentitydefinitionsrequest_p.h"
#include "uploadentitydefinitionsresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::UploadEntityDefinitionsRequest
 * \brief The UploadEntityDefinitionsRequest class provides an interface for IoTThingsGraph UploadEntityDefinitions requests.
 *
 * \inmodule QtAwsIoTThingsGraph
 *
 *  <fullname>AWS IoT Things Graph</fullname>
 * 
 *  AWS IoT Things Graph provides an integrated set of tools that enable developers to connect devices and services that use
 *  different standards, such as units of measure and communication protocols. AWS IoT Things Graph makes it possible to
 *  build IoT applications with little to no code by connecting devices and services and defining how they interact at an
 *  abstract
 * 
 *  level>
 * 
 *  For more information about how AWS IoT Things Graph works, see the <a
 *  href="https://docs.aws.amazon.com/thingsgraph/latest/ug/iot-tg-whatis.html">User
 * 
 *  Guide</a>>
 * 
 *  The AWS IoT Things Graph service is
 *
 * \sa IoTThingsGraphClient::uploadEntityDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
UploadEntityDefinitionsRequest::UploadEntityDefinitionsRequest(const UploadEntityDefinitionsRequest &other)
    : IoTThingsGraphRequest(new UploadEntityDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UploadEntityDefinitionsRequest object.
 */
UploadEntityDefinitionsRequest::UploadEntityDefinitionsRequest()
    : IoTThingsGraphRequest(new UploadEntityDefinitionsRequestPrivate(IoTThingsGraphRequest::UploadEntityDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool UploadEntityDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UploadEntityDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UploadEntityDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new UploadEntityDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::UploadEntityDefinitionsRequestPrivate
 * \brief The UploadEntityDefinitionsRequestPrivate class provides private implementation for UploadEntityDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a UploadEntityDefinitionsRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
UploadEntityDefinitionsRequestPrivate::UploadEntityDefinitionsRequestPrivate(
    const IoTThingsGraphRequest::Action action, UploadEntityDefinitionsRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UploadEntityDefinitionsRequest
 * class' copy constructor.
 */
UploadEntityDefinitionsRequestPrivate::UploadEntityDefinitionsRequestPrivate(
    const UploadEntityDefinitionsRequestPrivate &other, UploadEntityDefinitionsRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
