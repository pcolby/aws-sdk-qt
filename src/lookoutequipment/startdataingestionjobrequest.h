// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDATAINGESTIONJOBREQUEST_H
#define QTAWS_STARTDATAINGESTIONJOBREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class StartDataIngestionJobRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT StartDataIngestionJobRequest : public LookoutEquipmentRequest {

public:
    StartDataIngestionJobRequest(const StartDataIngestionJobRequest &other);
    StartDataIngestionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDataIngestionJobRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
