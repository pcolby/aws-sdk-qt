// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHITREQUEST_H
#define QTAWS_GETHITREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class GetHITRequestPrivate;

class QTAWSMTURK_EXPORT GetHITRequest : public MTurkRequest {

public:
    GetHITRequest(const GetHITRequest &other);
    GetHITRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHITRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
