// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROJECTREQUEST_H
#define QTAWS_GETPROJECTREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class GetProjectRequestPrivate;

class QTAWSEVIDENTLY_EXPORT GetProjectRequest : public EvidentlyRequest {

public:
    GetProjectRequest(const GetProjectRequest &other);
    GetProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProjectRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
