// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDIPROUTESREQUEST_H
#define QTAWS_ADDIPROUTESREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class AddIpRoutesRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT AddIpRoutesRequest : public DirectoryServiceRequest {

public:
    AddIpRoutesRequest(const AddIpRoutesRequest &other);
    AddIpRoutesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddIpRoutesRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
