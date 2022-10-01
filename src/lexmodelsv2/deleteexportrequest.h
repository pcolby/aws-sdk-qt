// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPORTREQUEST_H
#define QTAWS_DELETEEXPORTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteExportRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteExportRequest : public LexModelsV2Request {

public:
    DeleteExportRequest(const DeleteExportRequest &other);
    DeleteExportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExportRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
