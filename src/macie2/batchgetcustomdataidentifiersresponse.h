// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETCUSTOMDATAIDENTIFIERSRESPONSE_H
#define QTAWS_BATCHGETCUSTOMDATAIDENTIFIERSRESPONSE_H

#include "macie2response.h"
#include "batchgetcustomdataidentifiersrequest.h"

namespace QtAws {
namespace Macie2 {

class BatchGetCustomDataIdentifiersResponsePrivate;

class QTAWSMACIE2_EXPORT BatchGetCustomDataIdentifiersResponse : public Macie2Response {
    Q_OBJECT

public:
    BatchGetCustomDataIdentifiersResponse(const BatchGetCustomDataIdentifiersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetCustomDataIdentifiersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetCustomDataIdentifiersResponse)
    Q_DISABLE_COPY(BatchGetCustomDataIdentifiersResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
