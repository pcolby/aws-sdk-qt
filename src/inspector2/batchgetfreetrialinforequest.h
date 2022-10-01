// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETFREETRIALINFOREQUEST_H
#define QTAWS_BATCHGETFREETRIALINFOREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class BatchGetFreeTrialInfoRequestPrivate;

class QTAWSINSPECTOR2_EXPORT BatchGetFreeTrialInfoRequest : public Inspector2Request {

public:
    BatchGetFreeTrialInfoRequest(const BatchGetFreeTrialInfoRequest &other);
    BatchGetFreeTrialInfoRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetFreeTrialInfoRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
