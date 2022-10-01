// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECIPERESPONSE_H
#define QTAWS_DESCRIBERECIPERESPONSE_H

#include "personalizeresponse.h"
#include "describereciperequest.h"

namespace QtAws {
namespace Personalize {

class DescribeRecipeResponsePrivate;

class QTAWSPERSONALIZE_EXPORT DescribeRecipeResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    DescribeRecipeResponse(const DescribeRecipeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRecipeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRecipeResponse)
    Q_DISABLE_COPY(DescribeRecipeResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
