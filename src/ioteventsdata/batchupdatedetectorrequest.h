// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEDETECTORREQUEST_H
#define QTAWS_BATCHUPDATEDETECTORREQUEST_H

#include "ioteventsdatarequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchUpdateDetectorRequestPrivate;

class QTAWSIOTEVENTSDATA_EXPORT BatchUpdateDetectorRequest : public IoTEventsDataRequest {

public:
    BatchUpdateDetectorRequest(const BatchUpdateDetectorRequest &other);
    BatchUpdateDetectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpdateDetectorRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
