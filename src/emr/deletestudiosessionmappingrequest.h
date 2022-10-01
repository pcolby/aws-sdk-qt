// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIOSESSIONMAPPINGREQUEST_H
#define QTAWS_DELETESTUDIOSESSIONMAPPINGREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class DeleteStudioSessionMappingRequestPrivate;

class QTAWSEMR_EXPORT DeleteStudioSessionMappingRequest : public EmrRequest {

public:
    DeleteStudioSessionMappingRequest(const DeleteStudioSessionMappingRequest &other);
    DeleteStudioSessionMappingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStudioSessionMappingRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
