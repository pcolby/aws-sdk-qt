// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHITTYPEOFHITREQUEST_H
#define QTAWS_UPDATEHITTYPEOFHITREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class UpdateHITTypeOfHITRequestPrivate;

class QTAWSMTURK_EXPORT UpdateHITTypeOfHITRequest : public MTurkRequest {

public:
    UpdateHITTypeOfHITRequest(const UpdateHITTypeOfHITRequest &other);
    UpdateHITTypeOfHITRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateHITTypeOfHITRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
