// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHESAURUSRESPONSE_H
#define QTAWS_DESCRIBETHESAURUSRESPONSE_H

#include "kendraresponse.h"
#include "describethesaurusrequest.h"

namespace QtAws {
namespace Kendra {

class DescribeThesaurusResponsePrivate;

class QTAWSKENDRA_EXPORT DescribeThesaurusResponse : public KendraResponse {
    Q_OBJECT

public:
    DescribeThesaurusResponse(const DescribeThesaurusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeThesaurusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeThesaurusResponse)
    Q_DISABLE_COPY(DescribeThesaurusResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
