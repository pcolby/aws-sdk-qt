// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETREQUEST_H
#define QTAWS_GETDATASETREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class GetDatasetRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT GetDatasetRequest : public FinspaceDataRequest {

public:
    GetDatasetRequest(const GetDatasetRequest &other);
    GetDatasetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDatasetRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
