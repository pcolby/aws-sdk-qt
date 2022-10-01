// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMMODEREQUEST_H
#define QTAWS_UPDATESTREAMMODEREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class UpdateStreamModeRequestPrivate;

class QTAWSKINESIS_EXPORT UpdateStreamModeRequest : public KinesisRequest {

public:
    UpdateStreamModeRequest(const UpdateStreamModeRequest &other);
    UpdateStreamModeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStreamModeRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
