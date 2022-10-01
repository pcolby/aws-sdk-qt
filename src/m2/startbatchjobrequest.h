// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBATCHJOBREQUEST_H
#define QTAWS_STARTBATCHJOBREQUEST_H

#include "m2request.h"

namespace QtAws {
namespace M2 {

class StartBatchJobRequestPrivate;

class QTAWSM2_EXPORT StartBatchJobRequest : public M2Request {

public:
    StartBatchJobRequest(const StartBatchJobRequest &other);
    StartBatchJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBatchJobRequest)

};

} // namespace M2
} // namespace QtAws

#endif
