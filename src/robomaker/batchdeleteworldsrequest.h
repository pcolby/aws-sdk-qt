// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEWORLDSREQUEST_H
#define QTAWS_BATCHDELETEWORLDSREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class BatchDeleteWorldsRequestPrivate;

class QTAWSROBOMAKER_EXPORT BatchDeleteWorldsRequest : public RoboMakerRequest {

public:
    BatchDeleteWorldsRequest(const BatchDeleteWorldsRequest &other);
    BatchDeleteWorldsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteWorldsRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
