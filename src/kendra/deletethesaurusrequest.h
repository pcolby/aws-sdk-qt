// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHESAURUSREQUEST_H
#define QTAWS_DELETETHESAURUSREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class DeleteThesaurusRequestPrivate;

class QTAWSKENDRA_EXPORT DeleteThesaurusRequest : public KendraRequest {

public:
    DeleteThesaurusRequest(const DeleteThesaurusRequest &other);
    DeleteThesaurusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteThesaurusRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
