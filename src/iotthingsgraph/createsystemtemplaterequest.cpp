// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsystemtemplaterequest.h"
#include "createsystemtemplaterequest_p.h"
#include "createsystemtemplateresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::CreateSystemTemplateRequest
 * \brief The CreateSystemTemplateRequest class provides an interface for IoTThingsGraph CreateSystemTemplate requests.
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
 * \sa IoTThingsGraphClient::createSystemTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSystemTemplateRequest::CreateSystemTemplateRequest(const CreateSystemTemplateRequest &other)
    : IoTThingsGraphRequest(new CreateSystemTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSystemTemplateRequest object.
 */
CreateSystemTemplateRequest::CreateSystemTemplateRequest()
    : IoTThingsGraphRequest(new CreateSystemTemplateRequestPrivate(IoTThingsGraphRequest::CreateSystemTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSystemTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSystemTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSystemTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateSystemTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::CreateSystemTemplateRequestPrivate
 * \brief The CreateSystemTemplateRequestPrivate class provides private implementation for CreateSystemTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a CreateSystemTemplateRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
CreateSystemTemplateRequestPrivate::CreateSystemTemplateRequestPrivate(
    const IoTThingsGraphRequest::Action action, CreateSystemTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSystemTemplateRequest
 * class' copy constructor.
 */
CreateSystemTemplateRequestPrivate::CreateSystemTemplateRequestPrivate(
    const CreateSystemTemplateRequestPrivate &other, CreateSystemTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
