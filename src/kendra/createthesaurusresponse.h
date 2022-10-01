// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHESAURUSRESPONSE_H
#define QTAWS_CREATETHESAURUSRESPONSE_H

#include "kendraresponse.h"
#include "createthesaurusrequest.h"

namespace QtAws {
namespace Kendra {

class CreateThesaurusResponsePrivate;

class QTAWSKENDRA_EXPORT CreateThesaurusResponse : public KendraResponse {
    Q_OBJECT

public:
    CreateThesaurusResponse(const CreateThesaurusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateThesaurusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateThesaurusResponse)
    Q_DISABLE_COPY(CreateThesaurusResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
