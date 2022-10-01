// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSTEPSREQUEST_H
#define QTAWS_CANCELSTEPSREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class CancelStepsRequestPrivate;

class QTAWSEMR_EXPORT CancelStepsRequest : public EmrRequest {

public:
    CancelStepsRequest(const CancelStepsRequest &other);
    CancelStepsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelStepsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
