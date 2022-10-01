// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPROJECTVERSIONREQUEST_H
#define QTAWS_STOPPROJECTVERSIONREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class StopProjectVersionRequestPrivate;

class QTAWSREKOGNITION_EXPORT StopProjectVersionRequest : public RekognitionRequest {

public:
    StopProjectVersionRequest(const StopProjectVersionRequest &other);
    StopProjectVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopProjectVersionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
