// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEINSTANCEOUTPUTSREQUEST_H
#define QTAWS_LISTSERVICEINSTANCEOUTPUTSREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class ListServiceInstanceOutputsRequestPrivate;

class QTAWSPROTON_EXPORT ListServiceInstanceOutputsRequest : public ProtonRequest {

public:
    ListServiceInstanceOutputsRequest(const ListServiceInstanceOutputsRequest &other);
    ListServiceInstanceOutputsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceInstanceOutputsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
