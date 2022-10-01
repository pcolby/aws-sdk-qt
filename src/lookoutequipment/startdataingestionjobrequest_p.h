// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDATAINGESTIONJOBREQUEST_P_H
#define QTAWS_STARTDATAINGESTIONJOBREQUEST_P_H

#include "lookoutequipmentrequest_p.h"
#include "startdataingestionjobrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class StartDataIngestionJobRequest;

class StartDataIngestionJobRequestPrivate : public LookoutEquipmentRequestPrivate {

public:
    StartDataIngestionJobRequestPrivate(const LookoutEquipmentRequest::Action action,
                                   StartDataIngestionJobRequest * const q);
    StartDataIngestionJobRequestPrivate(const StartDataIngestionJobRequestPrivate &other,
                                   StartDataIngestionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDataIngestionJobRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
