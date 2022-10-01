// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAUNCHREQUEST_H
#define QTAWS_DELETELAUNCHREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class DeleteLaunchRequestPrivate;

class QTAWSEVIDENTLY_EXPORT DeleteLaunchRequest : public EvidentlyRequest {

public:
    DeleteLaunchRequest(const DeleteLaunchRequest &other);
    DeleteLaunchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLaunchRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
