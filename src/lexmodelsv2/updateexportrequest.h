// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPORTREQUEST_H
#define QTAWS_UPDATEEXPORTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateExportRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT UpdateExportRequest : public LexModelsV2Request {

public:
    UpdateExportRequest(const UpdateExportRequest &other);
    UpdateExportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateExportRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
