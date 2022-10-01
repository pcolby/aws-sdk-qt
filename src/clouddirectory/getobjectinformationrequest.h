// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTINFORMATIONREQUEST_H
#define QTAWS_GETOBJECTINFORMATIONREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetObjectInformationRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT GetObjectInformationRequest : public CloudDirectoryRequest {

public:
    GetObjectInformationRequest(const GetObjectInformationRequest &other);
    GetObjectInformationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectInformationRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
