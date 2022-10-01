// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICABLEINDIVIDUALASSESSMENTSRESPONSE_H
#define QTAWS_DESCRIBEAPPLICABLEINDIVIDUALASSESSMENTSRESPONSE_H

#include "databasemigrationresponse.h"
#include "describeapplicableindividualassessmentsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeApplicableIndividualAssessmentsResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeApplicableIndividualAssessmentsResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeApplicableIndividualAssessmentsResponse(const DescribeApplicableIndividualAssessmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeApplicableIndividualAssessmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicableIndividualAssessmentsResponse)
    Q_DISABLE_COPY(DescribeApplicableIndividualAssessmentsResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
