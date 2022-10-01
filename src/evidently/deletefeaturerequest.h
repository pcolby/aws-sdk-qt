// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFEATUREREQUEST_H
#define QTAWS_DELETEFEATUREREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class DeleteFeatureRequestPrivate;

class QTAWSEVIDENTLY_EXPORT DeleteFeatureRequest : public EvidentlyRequest {

public:
    DeleteFeatureRequest(const DeleteFeatureRequest &other);
    DeleteFeatureRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFeatureRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
