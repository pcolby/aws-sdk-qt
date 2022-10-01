// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMPORTREQUEST_H
#define QTAWS_DELETEIMPORTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteImportRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteImportRequest : public LexModelsV2Request {

public:
    DeleteImportRequest(const DeleteImportRequest &other);
    DeleteImportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteImportRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
