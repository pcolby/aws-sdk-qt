// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMPORTRESPONSE_H
#define QTAWS_DESCRIBEIMPORTRESPONSE_H

#include "lexmodelsv2response.h"
#include "describeimportrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeImportResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeImportResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DescribeImportResponse(const DescribeImportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeImportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImportResponse)
    Q_DISABLE_COPY(DescribeImportResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
