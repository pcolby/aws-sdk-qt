// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFEATUREREQUEST_H
#define QTAWS_GETFEATUREREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class GetFeatureRequestPrivate;

class QTAWSEVIDENTLY_EXPORT GetFeatureRequest : public EvidentlyRequest {

public:
    GetFeatureRequest(const GetFeatureRequest &other);
    GetFeatureRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFeatureRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
