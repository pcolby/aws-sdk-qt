// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHESAURUSRESPONSE_H
#define QTAWS_DELETETHESAURUSRESPONSE_H

#include "kendraresponse.h"
#include "deletethesaurusrequest.h"

namespace QtAws {
namespace Kendra {

class DeleteThesaurusResponsePrivate;

class QTAWSKENDRA_EXPORT DeleteThesaurusResponse : public KendraResponse {
    Q_OBJECT

public:
    DeleteThesaurusResponse(const DeleteThesaurusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteThesaurusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteThesaurusResponse)
    Q_DISABLE_COPY(DeleteThesaurusResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
