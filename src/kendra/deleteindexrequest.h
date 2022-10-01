// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINDEXREQUEST_H
#define QTAWS_DELETEINDEXREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class DeleteIndexRequestPrivate;

class QTAWSKENDRA_EXPORT DeleteIndexRequest : public KendraRequest {

public:
    DeleteIndexRequest(const DeleteIndexRequest &other);
    DeleteIndexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIndexRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
