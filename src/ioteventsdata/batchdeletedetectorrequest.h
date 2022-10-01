// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEDETECTORREQUEST_H
#define QTAWS_BATCHDELETEDETECTORREQUEST_H

#include "ioteventsdatarequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchDeleteDetectorRequestPrivate;

class QTAWSIOTEVENTSDATA_EXPORT BatchDeleteDetectorRequest : public IoTEventsDataRequest {

public:
    BatchDeleteDetectorRequest(const BatchDeleteDetectorRequest &other);
    BatchDeleteDetectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteDetectorRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
