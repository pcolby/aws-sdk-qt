// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOCABULARYRESPONSE_H
#define QTAWS_DESCRIBEVOCABULARYRESPONSE_H

#include "connectresponse.h"
#include "describevocabularyrequest.h"

namespace QtAws {
namespace Connect {

class DescribeVocabularyResponsePrivate;

class QTAWSCONNECT_EXPORT DescribeVocabularyResponse : public ConnectResponse {
    Q_OBJECT

public:
    DescribeVocabularyResponse(const DescribeVocabularyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVocabularyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVocabularyResponse)
    Q_DISABLE_COPY(DescribeVocabularyResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
